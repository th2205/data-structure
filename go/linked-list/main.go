package main

import "fmt"

type Node struct {
	data int
	next *Node
}

type LinkedList struct {
	head *Node
}

func createNode(data int) *Node {
	return &Node{data: data, next: nil}
}

func createLinkedList() *LinkedList {
	return &LinkedList{head: nil}
}

func insertNode(linkedList *LinkedList, node *Node) {
	if linkedList.head == nil {
		linkedList.head = node
	} else {
		cur := linkedList.head

		for cur.next != nil {
			cur = cur.next
		}

		cur.next = node
	}
}

func removeNode(linkedList *LinkedList, data int) {
	cur := linkedList.head
	prev := linkedList.head

	if cur.data == data {
		linkedList.head = cur.next

		return
	}

	for cur.data != data {
		prev = cur
		cur = cur.next
	}

	prev.next = cur.next
}

func searchNode(linkedList *LinkedList, data int) *Node {
	if linkedList.head == nil {
		return nil
	}

	cur := linkedList.head

	for cur.next != nil {
		cur = cur.next
	}

	if cur.data == data {
		return cur
	} else {
		return nil
	}
}

func printLinkedList(linkedList *LinkedList) {
	cur := linkedList.head

	for cur != nil {
		fmt.Println(cur.data)
		cur = cur.next
	}
}

func main() {
	fmt.Println("Linked List")

	linkedList := createLinkedList()
	node1 := createNode(1)
	node2 := createNode(2)
	node3 := createNode(3)
	node4 := createNode(4)
	node5 := createNode(5)

	fmt.Println("Insert Node 1, 2, 3, 4, 5")
	insertNode(linkedList, node1)
	insertNode(linkedList, node2)
	insertNode(linkedList, node3)
	insertNode(linkedList, node4)
	insertNode(linkedList, node5)
	// printLinkedList(linkedList)

	fmt.Println("search 2")
	foundNode := searchNode(linkedList, 2)
	fmt.Println(foundNode)

	fmt.Println("Remove Node 1 and 4")
	removeNode(linkedList, 1)
	removeNode(linkedList, 4)

	printLinkedList(linkedList)
}
