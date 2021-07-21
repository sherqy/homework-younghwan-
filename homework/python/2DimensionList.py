# 2018. 10. 23 실습: 2차원 리스트

# 직접 리스트 변수에 초기화
#score = [ [81, 82, 84, 86, 88], [71, 73, 75, 77, 79], [92, 93, 95, 96, 99], [61, 63, 64, 65, 66] ]


#순환문에서 하나씩 입력
score = [ ]

for i in range (4) :
    temp = [ ]                                      # 임시로 한행씩 입력 받을 리스트 선언
    print (" Enter the scores of # %i student" %(i+1) )
    for k in range (5) :
        temp.append (int (input (" Enter the scores: ") ) )

    score.append (temp)                             #5개항목을 갖는 리스트를 score 리스트 변수에 append


# 평균을 구하기 위한 변수 
sum1 = 0
mean = [ ]


# printing the list values

for i in range (4) :
    for k in range (5) :
        print (score[i][k], end = " ")
    print ( )


# Calculating the mean

for i in range (4) :
    for k in range (5) :
        sum1 += score[i][k]

    mean.append (sum1/5.0)
    sum1 = 0

print ("The mean values:", mean )

  
