def isPalindrom(word):
    l = len(word) + 1
    if(l%2 == 1):
        part_1 = word[0:l//2]
        part_2 = word[l//2:]
    else:
        part_1 = word[0:l//2-1]
        part_2 = word[l//2:]

    if(part_1 == part_2[::-1]):
        return True
    else:
        return False

while True:
    word = input()
    
