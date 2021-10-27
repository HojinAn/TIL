def print_char(str):
    if len(str)==0:
        return
    else:
        print(str[0], end='')
        print_char(str[1:])

print_char("Hello")
print("Hello")


def print_char_reverse(str):
    if len(str)==0:
        return
    else:
        print_char_reverse(str[1:])
        print(str[0], end='')

print_char_reverse("Hello")