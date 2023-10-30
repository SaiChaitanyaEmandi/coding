class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.head = None
    
    def printList(self):
        temp = self.head
        while temp:
            print(temp.data,end="")
            temp = temp.next
        
myList = LinkedList()
first = Node(1)
second = Node(2)
third = Node(3)
myList.head = first
first.next = second
second.next = third
myList.printList()