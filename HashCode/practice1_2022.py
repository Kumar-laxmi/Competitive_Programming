c = int(input())  

liked = []
unliked = []

for i in range(0,c):
    temp1 = input()
    lst1 = list(temp1.split(' '))
    l = int(lst1[0])
    if l>1:
        l_inp = lst1[1:]
    elif l==1:
        l_inp = list(lst1[1])
    else:
        l_inp = [""]
    for food in l_inp:
        if food not in liked:
            liked.append(food)
    
    temp2 = input()
    lst2 = list(temp2.split(' '))
    d = int(lst2[0])
    if d>1:
        d_inp = lst2[1:]
    elif d==1:
        d_inp = list(lst2[1])
    else:
        d_inp = [""]
    for food in d_inp:
        if food not in unliked:
            unliked.append(food)

ingridient = []
for food in liked:
    if food not in unliked:
        ingridient.append(food)

ingridient.insert(0,str(len(ingridient)))

for ans in ingridient:
    print(ans,end=" ")
