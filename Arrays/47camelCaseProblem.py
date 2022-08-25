import sys
def upper_case_splitter(s):
    word = ""
    list_of_words = []
    for i in range(len(s)):
        if s[i].islower():
            word += s[i]
            if i == len(s)-1:
                list_of_words.append(word.lower())
        else:
            if i!=0:
                list_of_words.append(word.lower())
            word = ""
            s[i].lower()
            word += s[i]
    return list_of_words

s = sys.stdin.read()
lines = s.splitlines()


for s in lines:
    list_strings = s.split(";")

    op = list_strings[0]
    typ = list_strings[1]
    splitted_word = list_strings[2].split(" ")
    new_word = ""
    if op=="C":
        if typ == "M":
            for i in range(1,len(splitted_word)):
                letter = splitted_word[i][0].upper()
                new_word = new_word + letter + splitted_word[i][1:]
            new_word = splitted_word[0].lower()+new_word+"()"
        elif typ == "C":
            for i in range(len(splitted_word)):
                letter = splitted_word[i][0].upper()
                new_word = new_word + letter + splitted_word[i][1:]
        else:
            for i in range(1,len(splitted_word)):
                letter = splitted_word[i][0].upper()
                new_word = new_word + letter +  splitted_word[i][1:]
            new_word = splitted_word[0].lower() + new_word
    else:
        splitted = upper_case_splitter(list_strings[2])
        if typ == "M":
            for elem in splitted:
                new_word += elem +" "
            new_word = new_word[:-3]
        elif typ == "C" or typ =="V":
            for elem in splitted:
                new_word += elem +" "
            new_word = new_word[:-1]

    print(new_word)