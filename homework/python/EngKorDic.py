number = int(input("Input the number of words: "))

engKorDic = dict()

count = 0
while count < number:
    eng = input("영어 단어: ")

    kor = input("한글 단어: ")

    if eng in engKorDic:
        print("해당 단어는 이미 존재합니다.")
        check = input("덮어쓰시겠습니까? (y or n): ")

        if check == 'y':
            engKorDic[eng] = kor
            print("수정되었습니다.")

    else:
        engKorDic[eng] = kor
        count += 1

    print()


for eng in sorted(engKorDic.keys()):
    print(eng)

for kor in sorted(engKorDic.values()):
    print(kor)
    
