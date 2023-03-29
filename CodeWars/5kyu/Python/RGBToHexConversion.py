# src: https://www.codewars.com/kata/513e08acc600c94f01000001/
def convertHex(number):
    if number <= 0:
        return "00"
    elif number >= 255:
        return "FF"
    firstHex = number // 16
    secondeHex = ((number / 16) - firstHex) * 16
    return getHexValue(firstHex) + getHexValue(secondeHex)
    
def getHexValue(num):
        hex = {0 : '0', 1:'1',2:'2',3:'3',4:'4',5:'5',6:'6',7:'7',8:'8',9:'9',10:'A',
              11:'B',12:'C',13:'D',14:'E',15:'F'}
        return hex[num]
        
def rgb(r, g, b):
    return convertHex(r) + convertHex(g) + convertHex(b)
    