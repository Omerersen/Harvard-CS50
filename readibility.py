import string

def is_punctuation(ch):
    return ch in string.punctuation

text = input("Text: ")
word_count = 1
spaces = 0
text_length = len(text)
total_length = 0
punctuation_count = 0


i = 0
while(i < text_length):
    if(text[i].isalpha()):
        total_length += 1

    if(text[i] == " "):
        word_count += 1
        spaces += 1
    if(is_punctuation(text[i])):
        punctuation_count += 1

    i += 1

L = ((total_length / word_count) * 100)
S = ((punctuation_count / word_count) * 100)

index = 0.0558 * L - 0.296*S -15.8

if(index < 1):
    print("Before Grade 1")
elif(index >= 16):
    print("Grade +16")
else:
    print("Grade", round(index))


