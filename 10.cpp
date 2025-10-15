# cook your dish here
# Read input
A, B, C = map(int, input().split())

# Calculate areas
rectangle_area = A * B
square_area = C * C

# Compare and print result
if rectangle_area == square_area:
    print("Yes")
else:
    print("No")

