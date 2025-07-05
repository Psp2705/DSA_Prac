def power(num):
    if num < 1:
        return 0
    elif num == 1:
        print(1)
        return 1
    else:
        prev = power(num//2)
        curr = prev*2
        print(curr)
        return curr