// Load Original Image
function loadOriginalImage(event) {
    const image = document.getElementById('originalImage');
    const placeholder = document.getElementById('originalPlaceholder');
    image.src = URL.createObjectURL(event.target.files[0]);
    image.style.display = 'block';
    placeholder.style.display = 'none';
}

// Load Test Image
function loadTestImage(event) {
    const image = document.getElementById('testImage');
    const placeholder = document.getElementById('testPlaceholder');
    image.src = URL.createObjectURL(event.target.files[0]);
    image.style.display = 'block';
    placeholder.style.display = 'none';
}

// Clear Original
function clearOriginal() {
    document.getElementById('originalImage').style.display = 'none';
    document.getElementById('originalPlaceholder').style.display = 'block';
    document.getElementById('originalFileInput').value = '';
}

// Clear Test
function clearTest() {
    document.getElementById('testImage').style.display = 'none';
    document.getElementById('testPlaceholder').style.display = 'block';
    document.getElementById('testFileInput').value = '';
}

// Analyze Signatures
function analyzeSignature() {
    const original = document.getElementById('originalImage').src;
    const test = document.getElementById('testImage').src;
    const matchPercent = document.getElementById('matchPercentage');
    const progressBar = document.getElementById('progressBar');
    const verificationResult = document.getElementById('verificationResult');

    if (!original || !test) {
        alert("Please upload both signatures before analysis!");
        return;
    }

    // Random simulated results for demo
    const match = Math.floor(Math.random() * 40) + 60;
    const geometric = Math.floor(Math.random() * 30) + 70;
    const dynamic = Math.floor(Math.random() * 20) + 65;
    const statistical = Math.floor(Math.random() * 25) + 60;

    document.getElementById('geometricScore').innerText = geometric + "%";
    document.getElementById('dynamicScore').innerText = dynamic + "%";
    document.getElementById('statisticalScore').innerText = statistical + "%";
    matchPercent.innerText = match + "%";
    progressBar.style.width = match + "%";

    // Change result message
    let message = "";
    let icon = "🔍";
    let color = "";

    if (match >= 95) {
        message = "✅ Authentic Signature";
        color = "text-green-600";
        icon = "🟢";
    } else if (match >= 85) {
        message = "🟡 Probable Match - Manual Review Needed";
        color = "text-yellow-600";
        icon = "🟡";
    } else if (match >= 70) {
        message = "🟠 Suspicious Signature - Verify Further";
        color = "text-orange-600";
        icon = "🟠";
    } else {
        message = "❌ Signature Mismatch - Access Denied";
        color = "text-red-600";
        icon = "🔴";
    }

    verificationResult.innerHTML = `
        <div class="text-8xl mb-6">${icon}</div>
        <h3 class="text-3xl font-bold ${color} mb-3">${message}</h3>
        <p class="text-gray-500 text-lg">Confidence Level: ${match}%</p>
    `;
}
