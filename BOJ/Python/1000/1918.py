exp = input()
stack = list()

for i in range(len(exp)):
    if 'A' <= exp[i] <= 'Z':
        print(exp[i], end='')
        continue

    if len(stack) == 0:
        stack.append(exp[i])
        continue

    if exp[i] == '+' or exp[i] == '-':
        while stack and stack[-1] != '(':
            print(stack.pop(), end='')
        stack.append(exp[i])

    if exp[i] == '*' or exp[i] == '/':
        while stack and (stack[-1] == '*' or stack[-1] == '/'):
            print(stack.pop(), end='')
        stack.append(exp[i])

    if exp[i] == '(':
        stack.append(exp[i])

    if exp[i] == ')':
        while stack and stack[-1] != '(':
            print(stack.pop(), end='')
        stack.pop()

while stack:
    print(stack.pop(), end='')
