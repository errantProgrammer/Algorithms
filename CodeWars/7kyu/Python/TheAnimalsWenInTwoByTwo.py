// src: https://www.codewars.com/kata/578de3801499359921000130/
def two_by_two(animals):
    if len(animals) == 0:
        return False
    elif len(animals) == 1:
        return {}
    
    dictionary = dict() # Creacion del diccionario
    
    for string in animals:
        if string in dictionary:
            dictionary.update({string : dictionary[string] + 1})
        else:
            dictionary[string] = 1
    not_two = []
    i = 0
    print(dictionary)
    for key in dictionary:
        if dictionary[key] >= 2:
            dictionary.update({key : 2})
        else:
            not_two.insert(i,key)
            i = i + 1
    for word in not_two:
        del dictionary[word]
    return dictionary
    