<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Surprise Box</title>
    <style>
        body {
            display: flex;
            align-items: center;
            justify-content: center;
            height: 100vh;
            margin: 0;
            background-color: #f0f0f0;
        }

        .box {
            width: 200px;
            height: 200px;
            background-color: #3498db;
            border-radius: 10px;
            display: flex;
            align-items: center;
            justify-content: center;
            cursor: pointer;
            transition: background-color 0.3s;
        }

        .box:hover {
            background-color: #2980b9;
        }

        .hidden-message {
            display: none;
            font-size: 20px;
            color: #fff;
        }
    </style>
</head>
<body>
    <div class="box" onclick="revealMessage()">
        <div class="hidden-message" id="message">You are soo good aluu</div>
    </div>

    <script>
        function revealMessage() {
            var message = document.getElementById("message");
            message.style.display = "block";
        }
    </script>
</body>
</html>
