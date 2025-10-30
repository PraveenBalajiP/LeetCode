class Bank:
    def __init__(self, balance: List[int]):
        self.balance=balance
        self.n=len(balance)

    def transfer(self, account1: int, account2: int, money: int) -> bool:
        if account1>self.n or account1<0:
            return False
        if account2>self.n or account1<0:
            return False
        if self.balance[account1-1]<money:
            return False
        if account1==account2:
            return True
        account1-=1
        account2-=1
        self.balance[account1]-=money
        self.balance[account2]+=money
        return True

    def deposit(self, account: int, money: int) -> bool:
        if account>self.n or account<0:
            return False
        account-=1
        initial_amount=self.balance[account]
        self.balance[account]+=money
        if self.balance[account]==initial_amount+money:
            return True
        else:
            return False

    def withdraw(self, account: int, money: int) -> bool:
        if account>self.n or account<0:
            return False
        if self.balance[account-1]<money:
            return False
        account-=1
        self.balance[account]-=money
        return True

# Your Bank object will be instantiated and called as such:
# obj = Bank(balance)
# param_1 = obj.transfer(account1,account2,money)
# param_2 = obj.deposit(account,money)
# param_3 = obj.withdraw(account,money)