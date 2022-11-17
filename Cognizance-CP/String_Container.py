test = input()
word = input()

if test in word:
    word = word.replace(test, '')
    if test[::-1] in word:
        print("1")
    else:
        print("0")
else:
    print("0")
