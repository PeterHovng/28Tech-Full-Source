#FUNCTION IN PYTHON
'''
    1/
    - code reuse: use function many time  in python, so we can create a function to perform the same task.
    - In Python also has (built-in) function as print(), max(), len(), type()
    - You can create your own function using the def keyword.
    
    2/
    - Syntax:
    def function_name(parameter):
        #code block: statement
        
        + to create function => use def keyword
        + before create function you define parameters and the return value
        + function runs when it is called (function call)
        
    3/
    - Emlement of function:
        + function name: An identifier by which the function is called.
        + arguments: contains a list of values passed to the function.
        + indentation: function body as statements must be indented.
        + function body: this is excuted each time the function is called. Include the code block and the return value.
        + return value: Ends function call and send data back to the program => when you call the function which returned many values, yout have to assgin that function to many varibles respectively to get the values by unpart the function.
    
    NOTICE WHEN YOU CREATE FUNCTION INPYTHON:
    - First, you have to define the arguments of the function => the information of data you call the fuction
    - Second, you have to define which value is returned and the data type of the value.
    - The function is called by the function name and the arguments.
    - The function can returned many of values.
    - The statement will be excuted when the statement come across the return statemet immediately.
    - If there are no return statement in the function then the default return value None.
    
    
    4/   
    # Emxample 1: create a function to calculate the sum of two numbers
def sum(a, b): # a, b are parameters
    result = a + b
    return result # return value from the function
m, n = 10, 20 # m, n are the arguments
print('Sum of', m, 'and', n, 'is', sum(m, n))
# comment: the value of m and n are assigned to a and b respectively.
# Notice: if you don't use return statement, the function will return None.    

    5/    
    - code for run the program
    if __name__ == '__main__':
        #code block: statement
        #call function
        function_name(arguments)
    => when you start the program, the main function will be called first by if __name__ = '__main__' condition
    
    # Example for the main function is called
def sum(a, b):
    result = a + b
    return result

if __name__ == '__main__':
    m, n = map(int, input('Enter two numbers: ').split())
    print('Sum of', m, 'and', n, 'is', sum(m,n), sep = ' ')
    
    # Example of special situation
def change_nume(n):
    n *= 2
    return n
if __name__ == '__main__':
    a = 1000
    change_nume(a)
    print(a)
    # comment: the value of a is not changed because n is a local variable of the function change_nume and n is assigned by the value of a.
    
    6/ Keyword arguments
    - when you call a function, the order of the arguments is very important.
    
    # Emxaple for keyword arguments
def print_hello(name1, name2, name3):
    print('Hello', name1, name2, name3)
    
if __name__ == '__main__':
    print_hello('X', 'Y', 'Z') # this is called: positional arguments
    print_hello(name2 = 'Z', name3 = 'X', name1 = 'Y') # this is called: keyword arguments
    # the result: Hello X Y Z
    #             Hello Y Z X
    # => when you use keyword arguments, the order of the arguments is not important.
    # because you asign the value to this argument so when you call function and the parameters are followed your argument asigned
    
    7/ Default arguments
    - You can set the default value for the arguments in the function.
    - the default value will be used if the function is called without the corresponding argument.
    
    # Example for default arguments
def infor(name, job = 'police'):
    print(name + job)
if __name__ == '__main__':
    # the function with the corresponding arguments
    infor('28tech', 'teacher')
    # the function without the corresponding argumets
    infor('28tech')    
    # => the result: 28techteacher for the correspoding arguments
    # => the result: 28techpolice for the default arguments
    # reason is that the default value will be used if the function is called without the corresponding argument.
    # if the function is called has the corresponding argument, the default value will be replaced by the corresponding argument.
'''

def print_hello(name1, name2, name3):
    print('hello', name1, name2, name3)

if __name__ == '__main__':
    print_hello('X', 'Y', 'Z')
    print_hello(name3 = 'X', name2 = 'z', name1 = 'Y')    