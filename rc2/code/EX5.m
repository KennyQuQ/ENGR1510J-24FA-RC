disp(['f(0, 0) = ', num2str(f(0, 0))]);
disp(['f(1, 0) = ', num2str(f(1, 0))]);
disp(['f(1, 1) = ', num2str(f(1, 1))]);
disp(['f(2, 1) = ', num2str(f(2, 1))]);
disp(['f(2, 2) = ', num2str(f(2, 2))]);
disp(['f(2, 3) = ', num2str(f(2, 3))]);

function result = f(x, y)   
    if y == 0
        result = 0;% Base case
    else
        result = g(f(x, y-1), x);% Recursive case
    end
end

function result = g(x, y)
    
    if y == 0
        result = x;% Base case
    else
        result = g(x, y-1) + 1; % Recursive case
    end
end