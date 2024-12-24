def cap_small(str):

    cap = 0
    small = 0

    for i in str:
        if "A"< i and i <= "Z" :
            cap += 1
        elif "a"< i and i <= "z" :
            small += 1

    print(f'Capital : {cap}  Small : {small}')

String = 'The quick Brow Fox'

cap_small(String)