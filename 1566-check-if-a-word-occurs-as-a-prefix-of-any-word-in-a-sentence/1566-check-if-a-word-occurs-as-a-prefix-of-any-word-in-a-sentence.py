class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        w=sentence.split()
        words=list(enumerate(w))
        for i in words:
            if i[1].startswith(searchWord):
                return i[0]+1
        
        return -1