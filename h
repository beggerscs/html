practical 1
Aim: Write a program to demonstrate the use of Basic HTML Formatting Tags

<!DOCTYPE html>
<html>
<head>
<title>Irfan | 9</title>
</head>
<body>
<h1>This is the heading 1</h1>
<h2>This is the heading 2</h2>
<h3>This is the heading 3</h3>
<p>This is the paragraph tag</p>
<p><i>This is the italic tag in paragraph</i></p>
<p><b>bold text</b></p>
<p><u>Under line tag</u></p>
<p><strike>Strike through tag</strike></p>
<p>Water formula: H<sub>2</sub>O</p>
<p>Einstein's formula: E = mc<sup>2</sup></p>
<p><big>This text is slightly larger than normal.</big></p>
<p><del>This text has been deleted.</del></p>
<pre>
This is the pre tag
new line in pre tag space
</pre>
<ul>
<li>Item 1</li>
<li>Item 2</li>
<li>Item 3</li>
</ul>
<ol type="decimal-leading-zero">
<li>First Item</li>
<li>Second Item</li>
<li>Third Item</li>
</ol>
</body>
</html>



Practical 2
Aim: Write a program to demonstrate the use of Heading Tags

<!DOCTYPE html>
<html lang="en">
<head>
<title>Saad | 46</title>
</head>
<body>
<h1>Saad 46</h1>
<h1>This is a Heading 1</h1>
<h2>This is a Heading 2</h2>
<h3>This is a Heading 3</h3>
<h4>This is a Heading 4</h4>
<h5>This is a Heading 5</h5>
<h6>This is a Heading 6</h6>
</body>
</html>




Practical 3
Aim: Write a program to demonstrate the Table Tags

<!DOCTYPE html>
<html>
<head>
<title>Saad | 46</title>
</head>
<body>
<table border="1">
<thead>
<tr>
<th>Name</th>
<th>Age</th>
<th>City</th>
</tr>
</thead>
<tbody>
<tr>
<td>Irfan</td>
<td>20</td>
<td>Mumbai</td>
</tr>
<tr>
<td>Salman</td>
<td>24</td>
<td>Delhi</td>
</tr>
<tr>
<td>Shahrukh</td>
<td>30</td>
<td>kolkata</td>
</tr>
</tbody>
<tfoot>
<tr>
<td colspan="3">End of Table</td>
</tr>
</tfoot>
</table>
</body>
</html>
OUTPUT:
Aim: Write a program to demonstrate the List Tags
<!DOCTYPE html>
<html>
<head>
<title>Saad | 46</title>
</head>
<body>
<h2>Unordered List</h2>
<ul>
<li>Apple</li>
<li>Banana</li>
<li>Cherry</li>
</ul>
<h2>Ordered List</h2>
<ol>
<li>First Step</li>
<li>Second Step</li>
<li>Third Step</li>
</ol>
<h2>Definition List</h2>
<dl>
<dt>HTML</dt>
<dd>HyperText Markup Language, the standard language for creating web
pages.</dd>
<dt>CSS</dt>
<dd>Cascading Style Sheets, used for styling HTML documents.</dd>
<dt>JavaScript</dt>
<dd>A programming language used to create dynamic content on web
pages.</dd>
</dl>
</body>
</html>




Practical 4
Aim: Write a program to demonstrate all Forms Tags

<!DOCTYPE html>
<html>
<head>
<title>HTML Form Example</title>
</head>
<body>
<form action="post">
<label for="name">Name:</label>
<input type="text" id="name" name="name" required>
<br><br>
<label for="email">Email:</label>
<input type="email" id="email" name="email" required>
<br><br>
<label for="password">Password:</label>
<input type="password" id="password" name="password" required>
<br><br>
<legend>Gender:</legend>
<input type="radio" id="male" name="gender" value="male">
<label for="male">Male</label>
<br>
<input type="radio" id="female" name="gender" value="female">
<label for="female">Female</label>
<br>
<caption>Interests</caption><br>
<input type="checkbox" id="coding" name="interests" value="coding">
<label for="coding">Coding</label>
<br>
<input type="checkbox" id="reading" name="interests" value="reading">
<label for="reading">Reading</label>
<br>
<input type="checkbox" id="Video games" name="interests" value="Video games">
<label for="Video games">Video games</label>
</fieldset>
<br>
<caption>Country</caption><br>
<select id="country" name="country">
<option value="usa">India</option>
<option value="canada">Canada</option>
<option value="uk">United Kingdom</option>
<option value="australia">Australia</option>
</select>
<br><br>
<label for="message">Message:</label>
<textarea id="message" name="message" rows="4" cols="50"
required></textarea>
<br><br>
<button type="submit">Submit</button>
</form>
</body>
</html>




Practiacl 5
Aim: Write a program to implement conditional statements in JavaScript

console.log("Saad 46");
let age = 18;
if (age < 18){
console.log("You are a child");
}
else if(age > 18 && age > 60){
console.log("You are an senior citizen")
}
else{
console.log("You are an adult");
}


Aim: Write a program to implement Looping statement in
JavaScript
console.log("Saad 46");
console.log("For loop");
let a = 5;
for (let i = 0; i <= a; i++) {
console.log(i);
}
console.log("While loop");
let b = 0;
while (b < 6) {
console.log(b);
b++;
}
console.log("Do while loop");
let c = 0;
do {
console.log(c);
c++
} while (c < 6);




Practical 6
Aim: Write a program to demonstrate functions in JavaScript

console.log("Saad 46")
function nice(name) {
console.log("Hello " + name + " How are you!")
}
nice("Irfan")
function sum(a, b) {
return a + b
}
result = sum(20, 10);
console.log("The sum of a and b is: ", result)


Aim: Write a program to demonstrate form validation using JavaScript

<!DOCTYPE html>
<html>
<head>
<title>Saad | 46</title>
<style>
.error {
color: red;
font-size: 0.9em;
}
</style>
</head>
<body>
<form id="myForm">
<label for="name">Name:</label>
<input type="text" id="name" name="name">
<span id="nameError" class="error"></span>
<br><br>
<label for="email">Email:</label>
<input type="email" id="email" name="email">
<span id="emailError" class="error"></span>
<br><br>
<button type="submit">Submit</button>
</form>
<script>
var form = document.getElementById('myForm');
var nameInput = document.getElementById('name');
var emailInput = document.getElementById('email');
var nameError = document.getElementById('nameError');
var emailError = document.getElementById('emailError');
form.onsubmit = function (event) {
event.preventDefault();
nameError.innerText = '';
emailError.innerText = '';
var name = nameInput.value.trim();
var email = emailInput.value.trim();
if (name === '') {
nameError.innerText = 'Name is required.';
} else if (email === '') {
emailError.innerText = 'Email is required.';
} else {
alert('Form submitted successfully!');
}
};
</script>
</body>
</html>



Practical 7
Aim: Write a program to perform math module in JavaScript

console.log("Saad 46")
console.log(Math.PI);
console.log(Math.round(4.7));
console.log(Math.ceil(4.2));
console.log(Math.floor(4.8));
console.log(Math.pow(2, 3));
console.log(Math.sqrt(16));
console.log(Math.random());
console.log(Math.max(10, 20));
console.log(Math.min(10, 20));
console.log(Math.abs(-42));




Practical 8
Aim: Write a program to demonstrate the use of CSS

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Saad | 46</title>
<style>
body {
font-family: Arial, sans-serif;
background-color: #f0f0f0;
margin: 0;
padding: 0;
}
.header {
background-color: #4CAF50;
color: white;
text-align: center;
padding: 20px;
}
.content {
padding: 20px;
margin: 20px;
}
.intro-text {
color: #333;
font-size: 18px;
line-height: 1.6;
}
.styled-button {
background-color: #008CBA;
color: white;
border: none;
padding: 10px 20px;
cursor: pointer;
border-radius: 5px;
}
.styled-button:hover {
background-color: #005f73;
}
.footer {
background-color: #333;
color: white;
text-align: center;
padding: 10px;
position: fixed;
width: 100%;
bottom: 0;
}
</style>
</head>
<body>
<header class="header">
<h1>Welcome to Internal CSS Demonstration</h1>
</header>
<main class="content">
<p class="intro-text">This is a simple example to demonstrate the use of internal
CSS for styling HTML elements.</p>
<button class="styled-button">Click Me</button>
</main>
<footer class="footer">
<p>© 2024 CSS Demo. All rights reserved.</p>
</footer>
</body>
</html>


Practical 9
Aim: Write a program to demonstrate Conditional statements in PHP

<?php
echo "Saad 46\n";
$age = 18;
echo $age . "\n";
if ($age < 18) {
echo "You are a child\n";
} elseif ($age >= 18 && $age <= 60) {
echo "You are an adult\n";
} else {
echo "You are a senior citizen\n";
}
?>
OUTPUT:
Aim: Write a program to demonstrate Looping statement in PHP
<?php
echo "Saad 46\n";
echo "For loop\n";
$a = 5;
for ($i = 0; $i <= $a; $i++) {
echo $i . "\n";
}
echo "While loop\n";
$b = 0;
while ($b < 6) {
echo $b . "\n";
$b++;
}
echo "Do while loop\n";
$c = 0;
do {
echo $c . "\n";
$c++;
} while ($c < 6);
?>




Practical 10
Aim: Write a program to demonstrate Arrays in PHP

<?php
echo "Saad 46\n";
// Indexed Array
$colors = ["Red", "Green", "Blue"];
echo "Indexed Array:\n";
foreach ($colors as $color) {
echo $color . "\n";
}
// Associative Array
$person = [ "first_name" => "Irfan", "last_name" => "Ali", "age" => 20
];
echo "\nAssociative Array:\n";
foreach ($person as $key => $value) {
echo "$key: $value\n";
}
// Multidimensional Array
$contacts = [
["Irfan", "Ali", "Irfan@gmail.com"], ["Salman", "Khan", "salman@gmail.com"]
];
echo "\nMultidimensional Array:\n";
foreach ($contacts as $contact) {
echo implode(", ", $contact) . "\n";
}
?>


Aim: Write a program to demonstrate HTML submitted form data in PHP
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>Saad | 46</title>
</head>
<body>
<h2>Submit Your Information</h2>
<form action="process.php" method="post">
<label for="name">Name:</label>
<input type="text" id="name" name="name" required>
<br><br>
<label for="email">Email:</label>
<input type="email" id="email" name="email" required>
<br><br>
<label for="age">Age:</label>
<input type="number" id="age" name="age" required>
<br><br>
<button type="submit">Submit</button>
</form>
</body>
</html>
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
$name = htmlspecialchars($_POST['name']);
$email = htmlspecialchars($_POST['email']);
$age = htmlspecialchars($_POST['age']);
echo "<h2>Submitted Data:</h2>";
echo "Name: " . $name . "<br>";
echo "Email: " . $email . "<br>";
echo "Age: " . $age . "<br>";
}
?>
