# 기존에 앉은 사람이 1인 경우 양 끝에 앉혔을 때 거리두기 값이 큰 경우가 답
# 기존에 앉은 사람이 둘 이상인 경우 양 끝에 사람이 있는지 없는지로 나뉨
#   양 끝중 하나라도 없는 경우 없는 위치에 한 번씩 놓아봐야 한다.
#       양 끝에 놓기 전 기준으로 한 명 추가했을 때 거리두기 최댓값
#       양 끝에 한 명씩 추가했을 때 거리두기 최댓값
#       둘 중 최댓값이 답이다.

import sys

N = int(input())
seated = list(map(int, list(input())))
# print(seated)


def get_min_and_max_dist():

    min_dist = sys.maxsize
    max_dist = -sys.maxsize
    for i in range(N-1):
        if seated[i] == 1:
            for j in range(i+1, N):
                if seated[j] == 1:
                    dist = j - i
                    break
            min_dist = min(min_dist, dist)
            max_dist = max(max_dist, dist)
    return min_dist, max_dist

# 기존에 앉은 사람이 1인 경우 양 끝에 앉혔을 때 거리두기 값이 큰 경우가 답
seat_count = seated.count(1)
if seat_count == 1:
    index = seated.index(1)
    print(max(index, N-1-index))
    sys.exit()

# 기존에 앉은 사람이 둘 이상인 경우
min_dist, max_dist = get_min_and_max_dist()
answer = 0
if min_dist <= max_dist // 2:
    answer = min_dist
else:
    answer = max_dist // 2

if seated[0] != 1:
    seated[0] = 1
    new_min_dist, new_max_dist = get_min_and_max_dist()
    answer = max(answer, new_min_dist)
    seated[0] = 0

if seated[N-1] != 1:
    seated[N-1] = 1
    new_min_dist, new_max_dist = get_min_and_max_dist()
    answer = max(answer, new_min_dist)
    seated[1] = 0

print(answer)