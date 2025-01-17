# advanced Functions:

# zip(): looping through two list simultaneously

words = [1, 2, 3, 4]
ids = ["432", "234", "432", "432"]

for word, id in zip(words, ids):
    print(f"{word} is {id}")

for idx, (word, id) in enumerate(zip(words, ids)):
    print(f"{idx + 1}. {word} is {id}")