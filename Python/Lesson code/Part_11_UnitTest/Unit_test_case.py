# có thể viết test case cho chươn trình thay vì chạy terminal nhiêu lần
# Bắng cái module là unittest => giúp pass những test case vào hàm bạn thiết lập & so sánh giá trị của hàm và giá trị mong muốn

# Problem: Is Unique - Implement an Algorithm to determine if a string has all unique characters
# use hash-table => in python is dictionary

import unittest

def is_unique(str):
    # Hint: Hash table => Dict: key-value
    char_set = {}
    
    for char in str:
        if char in char_set:
            return False
        char_set[char] = True
    return True    

# viết unittest để check test case - inhertance class TestCase giúp chúng ta tạo ra test case thử is_unique
class Test(unittest.TestCase):
    dataT = [('abc'), ('fdsa432'), ('')]
    dataF = [('abc'), ('fdasasdf'), ('43fd13')]
    
    def test_unique(self):
        # True check: mong muốn các giá trị trong hàm is_unique
        for test_case in self.dataT:
            actualResult = is_unique(test_case)
            self.assertTrue(actualResult)
            
        # false check: 
        for test_case in self.dataF:
            actualResult = is_unique(test_case)
            self.assertFalse(actualResult)

if __name__ == "__main__":
    unittest.main()