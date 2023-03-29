"""
src: https://www.codewars.com/kata/57f780909f7e8e3183000078/
"""
def grow(arr):
	product = 1
	for i in arr:
		product *= i
	return product

"""
return math.prod(arr)
Otra opción es hacerlo con reduce, pero da flojera xD
"""