# User input and processing into a array list
N = int(input("Enter number of elements: "))
A = list(map(int, input("Enter the numbers: ").strip().split()))[:N]


n = len(A)
for i in range(n):
    j = i

    for k in range(i+1, n):
        # Checking whether the new element is less than the previous
        if A[k] < A[j]:
            j = k
    # Swapping the newly found minimum value element with current min value element
    t = A[i]
    A[i] = A[j]
    A[j] = t
    print(A)

print("Sorted Array: ", A)

# ...Sample Input....
# No of elements = 10
# 34 56 23 65 -10 19 -22 53 12 44