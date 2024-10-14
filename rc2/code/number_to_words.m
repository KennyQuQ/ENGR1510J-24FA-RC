function result = number_to_words(number)
    % Special case: When number is 0, we return an empty string
    if number == 0
        result = '';
        return;
    end
    
    % Extract the last digit
    digit = mod(number, 10);    
    rest_of_number = floor(number / 10); 
    
    % Convert the last digit to its word equivalent
    word = digit_to_word(digit);

    % Base case
    if rest_of_number == 0
        result = word;
    else
        % Recursive case
        result = [number_to_words(rest_of_number), ' ', word];
    end
end

function word = digit_to_word(digit)
    switch digit
        case 0
            word = 'zero';
        case 1
            word = 'one';
        case 2
            word = 'two';
        case 3
            word = 'three';
        case 4
            word = 'four';
        case 5
            word = 'five';
        case 6
            word = 'six';
        case 7
            word = 'seven';
        case 8
            word = 'eight';
        case 9
            word = 'nine';
        otherwise
            error('Invalid digit: %d', digit);
    end
end
