#ROTATE AN ARRAY  TO THE LEFT  BY X th POSTIONS
import numpy as np
arr=np.array([12,34,4,56,78])
x=int(input("ENTER INDEX:"))
x=x % len(arr)
rotated_array=np.roll(arr,-x) #"-VE" for left side rotation
print(rotated_array)


