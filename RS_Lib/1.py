import matplotlib.pyplot as plt
import numpy as np
import math

a=np.loadtxt("/home/ljq/qt/RS_Lib/1.txt")
f=plt.figure();
ax=f.add_subplot(111)
ax.set(xlim=[0, 10], ylim=[0, 10])

	
plt.plot(a[0,0],a[0,1],'ro')
plt.arrow(a[0,0], a[0,1], 1.0 * math.cos(a[0,2]), 1.0 * math.sin(a[0,2]),
                  fc="r", ec="k", head_width=0.5, head_length=0.5)
plt.plot(a[len(a)-1,0],a[len(a)-1,1],'yo')
plt.arrow(a[len(a)-1,0], a[len(a)-1,1], 1.0 * math.cos(a[len(a)-1,2]), 1.0 * math.sin(a[len(a)-1,2]),fc="r", ec="k", head_width=0.5, head_length=0.5)
plt.plot(a[:,0],a[:,1],'-')
plt.show()
