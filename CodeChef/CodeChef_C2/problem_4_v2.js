const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let t;

rl.question("", (numTestCases) => {
    t = parseInt(numTestCases);

    const handleTestCase = () => {
        if (t === 0) {
            rl.close();
            return;
        }

        t--;

        rl.question("", (input) => {
            let [n, s] = input.split(' ').map(Number);

            if (s % 8 === 0) {
                console.log(s, '\n');
                handleTestCase();
            } else {
                let flag = true;
                while (true) {
                    s++;
                    let x = s.toString();

                    if (x.length > n) {
                        break;
                    }

                    if (s % 8 === 0) {
                        flag = false;
                        console.log(s, '\n');
                        handleTestCase();
                        return;
                    }
                }

                if (flag) {
                    console.log(-1, '\n');
                    handleTestCase();
                }
            }
        });
    };

    handleTestCase();
});
