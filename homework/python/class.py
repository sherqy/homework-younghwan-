import math

class Vector:
    def __init__(self,x,y,z):
        self.x = x
        self.y = y
        self.z = z
        
    def magnitude(self):
        self.magnitude= math.sqrt(self.x**2+self.y**2+self.z**2)
        #self.magnitude= (self.x**2+self.y**2+self.z**2)**(1/2)

    def __str__(self):
        return "("+str(self.x)+", "+str(self.y)+", "+str(self.z)+")"
        #return "(%d, %d, %d)" %(self.x, self.y, self.z)
        
def inner_product(vec1, vec2):
    return vec1.x*vec2.x + vec1.y*vec2.y + vec1.z*vec2.z

def Calculate_angle(vec1, vec2):

    a = inner_product(vec1,vec2)
    b = vec1.magnitude * vec2.magnitude
    
    return math.acos(a/b) * 180 / math.pi

v1 = Vector (1, 2, 2)
v2 = Vector (3, 0, 4)
v1.magnitude ()
v2.magnitude ()
print (v1, v2)
print (Calculate_angle (v1, v2))




