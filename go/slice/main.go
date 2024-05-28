package main

import "fmt"

func add_item(slice *[]int, num int) {
	*slice = append(*slice, num)
}

func remove_item(slice *[]int, index int) {
	*slice = append((*slice)[:index], (*slice)[index+1:]...)
}

func main() {
	slice := []int{1, 2, 3, 4, 5}
	new_slice := slice[1:2]

	fmt.Println(slice)
	add_item(&slice, 7)
	fmt.Println("add")
	fmt.Println(slice)
	fmt.Println("remove")
	remove_item(&slice, 2)
	fmt.Println(slice)
	fmt.Println(new_slice)
}
