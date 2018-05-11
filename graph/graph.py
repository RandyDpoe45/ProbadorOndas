import math as mat
import numpy as np
import matplotlib.pyplot as plt

def plot(x,y):
	plt.plot(x, y)
	plt.savefig('./image.png')

def points():
	i=0
	x=[]
	y=[]
	f=open("./graph/puntos.txt",'r')
	for line in f:
		if(i%2==0):
			x.append(float(line))
		else:
			y.append(float(line))
		i+=1
	return [x,y]

p=points()
plot(p[0],p[1])
