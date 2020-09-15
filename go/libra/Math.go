package libra

//最小値
func Min(nums ...int) int {
	if len(nums) == 0 {
		panic("min() requires at least one arguments.")
	}
	res := nums[0]
	for _, val := range nums {
		if res > val {
			res = val
		}
	}
	return res
}

//最大値
func Max(nums ...int) int {
	if len(nums) == 0 {
		panic("min() requires at least one arguments.")
	}
	res := nums[0]
	for _, val := range nums {
		if res < val {
			res = val
		}
	}
	return res
}

//int version absolute
func abs(num int) int {
	if num > 0 {
		return num
	} else {
		return -1 * num
	}
}

//繰り返し自乗法
func pow(num int, time int) int {
	res := 1
	for time > 0 {
		if time%2 != 0 {
			res = res * num
		}
		num = num * num
		time /= 2
	}
	return res
}
