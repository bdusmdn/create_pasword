# create_pasword

A password generation application that converts a given sentence into a pin code.

This application was developed to address the various password requirements that arise from the advancement and diversification of technology. It takes a key word or sentence and converts it into a complex pin code. This way, the password, which was previously a simple word, becomes difficult to guess and decrypt for others, while still remaining a simple key word for the user. For example, if the key word is "password", the pin code generated by the application would be "16119192315184". The first method of encryption is by displaying the letters in order and concatenating them, while the second method is by displaying the sum of the letters. This method is more suitable for longer sentences as it produces shorter codes.

The code works by taking the input key word or sentence and then converting each letter into its corresponding ASCII code. Then, it subtracts 96 from each ASCII code and concatenates them to form the final pin code. Additionally, the code also has a second method of encryption which is by summing the ASCII codes of the letters.

The application is written in C programming language and it uses ASCII codes to convert the input key word or sentence into a pin code. The ASCII code for "a" is 97, so the code takes each letter of the input key word or sentence and subtracts 96 from its ASCII code. The result is then concatenated to form the final pin code. For example, if the input key word is "password", the pin code generated by the first method would be "1623127151819".

The second method of encryption is by summing the ASCII codes of the letters. For example, if the input key word is "password" , the pin code generated, the pin code generated by the second method would be "16+1+19+19+23+15+18+4" = 115.

It is important to note that this method may not be as secure as other encryption methods as it is based on the ASCII codes of the letters, which can be easily decrypted by someone who knows the method. Therefore, it is recommended to use this method for creating pin codes for personal use or for creating temporary passwords.

The code also allows the user to choose between the two encryption methods and also provides an option to input a new key word or sentence. The user can also view the pin code generated by the previous key word or sentence.
