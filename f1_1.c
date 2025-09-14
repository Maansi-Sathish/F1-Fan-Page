<html>
<head>
    <title>My First Web Page</title>
    <style>
        body {
            margin: 0;
            font-family: 'Segoe UI', Arial, sans-serif;
            background-color: #000;
            color: #fff;
            text-align: center; 
        }

        /* Header with logo */
        header {
            background: #111;
            padding: 15px 0;
            box-shadow: 0 2px 8px rgba(255,0,0,0.3);
            position: sticky;
            top: 0;
            z-index: 1000;
        }

        header img {
            height: 150px;
        }

        /* Section Headings */
        h1 {
            margin: 30px 0 10px;
            font-size: 2.5rem;
            color: #ff1a1a;
        }

        h2 {
            margin: 40px 0 20px;
            font-size: 2rem;
            color: #ff1a1a;
            letter-spacing: 1px;
        }

        /* Lists */
        ul, ol {
            list-style: none;
            padding: 0;
            margin: 0 auto 30px;
            max-width: 500px;
        }

        ul li, ol li {
            background: #111;
            margin: 8px 0;
            padding: 12px;
            border-radius: 8px;
            transition: 0.3s;
            font-size: 18px;
        }

        ul li:hover, ol li:hover {
            background: #ff1a1a;
            color: #fff;
            transform: scale(1.05);
        }

        /* Images */
        .content-img {
            display: block;
            margin: 40px auto;
            border-radius: 12px;
            max-width: 95%;
            box-shadow: 0 0 20px rgba(255,0,0,0.3);
        }

        /* Info Card Section */
        .info-section {
            max-width: 900px;
            margin: 40px auto;
            padding: 25px;
            background: #111;
            border-radius: 12px;
            box-shadow: 0 0 15px rgba(255,0,0,0.2);
        }

        .info-section ul {
            margin: 10px 0;
        }

        /* Button */
        a {
            display: inline-block;
            margin: 30px auto;
            padding: 14px 28px;
            background: #ff1a1a;
            color: #fff;
            text-decoration: none;
            font-size: 1.2rem;
            border-radius: 8px;
            transition: 0.3s;
        }

        a:hover {
            background: darkred;
            transform: scale(1.1);
        }
    </style>
</head>
<body>
    <!-- Header with Logo -->
    <header>
        <img src="f1_logo.png" alt="F1 Logo">
    </header>

    <!-- Hero Title -->
    <h1>Welcome to the World of F1</h1>

    <!-- Cars List -->
    <h2>F1 Cars</h2>
    <ul>
        <li>Ferrari</li>
        <li>Red Bull</li>
        <li>Mercedes</li>
        <li>McLaren</li>
        <li>Williams</li>
        <li>Aston Martin</li>
        <li>Mercedes</li>
    </ul>

    <!-- Drivers List -->
    <h2>F1 Drivers</h2>
    <ol>
        <li>Charles Leclarc and Lewis Hamilton</li>
        <li>Max Verstappen and Yuki Tsunoda</li>
        <li>George Russel and Kimi Antonelli</li>
        <li>Alexander Albon and Carlos Sainz</li>
        <li>Lance Stroll and Fernando Alanso</li>
        <li>Oscar Piastri and Lando Norris</li>
    </ol>

    <!-- Teams Image -->
    <img src="f1_teams.png" alt="F1 Teams" class="content-img">

    <!-- Info Section -->
    <div class="info-section">
        <h2>Teams and its Racers</h2>
        <ul>
            <li>The following page has all the information about F winners over the past 15, 2010-2025.</li>
            <li>It has information about the ongoing 2025 race.</li>
            <li>There is crazy info about the F1 cars and its racers over the years and all their achievments</li>
        </ul>
    </div>

    <!-- Next Page Button -->
    <a href="f1_2.html">More about F1</a>
</body>
</html>
