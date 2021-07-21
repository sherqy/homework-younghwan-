class Score:
    def __init__(self,math,python,korean):
        self.math = math
        self.python = python
        self.korean = korean
        self.mean = 0.0

    def calculate_mean(self):
        self.mean = (self.math+self.python+self.korean)/3

    def __str__(self):
        msg = "math: " +str(self.math) +"\n"
        msg += "python: " + str(self.python) + "\n"
        msg += "korean: " + str(self.korean) + "\n"
        msg += "mean: " +str(self.mean) + "\n"

        return msg
'''
Student1 = Score(10,20,30)
Student1.calculate_mean()
Student2 = Score(20,30,40)
Student2.calculate_mean()
Student3 = Score(50,60,70)
Student3.calculate_mean()
print(Student1)
print(Student2)
print(Student3)
'''
Students = []
for i in range(3):
    math = float(input("Input the math score:"))
    python = float(input("Input the pyhton score:"))
    korean = float(input("Input the korean score:"))

    Students.append(Score(math,python,korean))
    print("a Score object is created")
    print()

for i in range(3):
    Students[i].calculate_mean()
    print(Students[i])

    
