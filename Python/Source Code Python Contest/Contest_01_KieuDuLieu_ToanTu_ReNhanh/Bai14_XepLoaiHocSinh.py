score_1, score_2, score_3, score_4 = map(float, input().split())
average_score = (score_1 + score_2 + score_3 * 2 + score_4 * 3) / 7
if average_score >= 8:
    print('GIOI')
elif average_score < 8 and average_score >= 6.5: # cach 2 average_score >= 6.5
    print('KHA')
elif average_score < 6.5 and average_score >= 5: # cach 2 average_score >= 5
    print('TRUNG BINH')
else:
    print('YEU')