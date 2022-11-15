package main

//Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

import "fmt"

func TowerBuilder(nFloors int) []string {
	layers := make([]string, nFloors)
	for i := 0; i < nFloors; i++ {
		for j := 0; j < nFloors*2-1; j++ {
			if j >= nFloors-(i+1) && j <= nFloors+(i-1) {
				layers[i] += "*"
			} else {
				layers[i] += " "
			}
		}
	}
	return layers
}

func main() {
	fmt.Println(TowerBuilder(6))
}
