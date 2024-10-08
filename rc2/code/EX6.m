n = input('Enter the value of n: ');
sum = 0;

% adding directly
sum = n * (n + 1) / 2;

% using sum iterate
sum = sum(0:n);

% while
while i <= n
    sum = sum + i; 
    i = i + 1;     
end

% for
for i = 0:n
    sum = sum + i; % Add each integer to sum
end

disp(sum)