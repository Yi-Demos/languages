package main

import (
	"fmt"
)

func main() {
	fmt.Println("fmt.Println()")
	// fmt.Print not end with next line so can't be print!!
	// https://stackoverflow.com/questions/66111488/wont-print-anything-on-terminal
	fmt.Print("fmt.Print() with n  \n")
	fmt.Print("fmt.Print() without n")
}