# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        sol = ListNode()
        temp = sol
        carry = 0
        while l1 != None or l2 != None or carry:
            sum = 0
            if l1 != None:
                sum += l1.val
                l1 = l1.next
            if l2 != None:
                sum += l2.val
                l2 = l2.next
            sum += carry
            carry = sum/10
            newNode = ListNode(sum % 10)
            temp.next = newNode
            temp = temp.next
        return sol.next

