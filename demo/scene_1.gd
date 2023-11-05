extends Node

func _ready():
	var t := GDExample.new()
	print(t.test) # this works
	print(t.test.get_noise_2d(10, 10)) # this doesnt work...
