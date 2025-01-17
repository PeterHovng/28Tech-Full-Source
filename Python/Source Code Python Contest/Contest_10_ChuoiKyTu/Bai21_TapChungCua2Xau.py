if __name__ == '__main__':
    s = input()
    t = input()
    
    s_words = set(s.lower().split())
    t_words = set(t.lower().split())
    
    # # Cach 1
    # ans = []
    # for char in s_words:
    #     if char in t_words:
    #         ans.append(char)
    # ans.sort()
    # print(' '.join(ans))
    
    # Cach2
    intersection = s_words & t_words
    print(' '.join(sorted(intersection)))
    
    
            
            
    