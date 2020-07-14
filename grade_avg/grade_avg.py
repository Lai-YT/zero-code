
num_of_subjects = int(input('Number of subjects: '))
total_credits, total_score = 0, 0
credits_list = []
score_list = []
# read data
for i in range(num_of_subjects):
    score, credits = map(int, input(f'#{i+1} score & credits: ').split())
    total_credits += credits
    credits_list.append(credits)
    total_score += score * credits
    score_list.append(score)
# handle output
print('-----result----')
for i in range(num_of_subjects):
    print(f'#{i+1} credits: {credits_list[i]}, score: {score_list[i]}')
print(f'Average: {total_score/total_credits:.2f}')
