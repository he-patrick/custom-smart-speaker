#ifndef _NETWORK_PARAM_H
#define _NETWORK_PARAM_H

const char *ssid = "Patrick's iPhone";
const char *password = "ilikekiwi";
const char*  server = "speech.googleapis.com";

// To get the certificate for your region run:
  // openssl s_client -showcerts -connect speech.googleapis.com:443
// Copy the certificate (all lines between and including ---BEGIN CERTIFICATE---
// and --END CERTIFICATE--) to root.cert and put here on the root_cert variable.
const char* root_ca= 
"-----BEGIN CERTIFICATE-----\n"
MIIGEzCCBPugAwIBAgIRAMtixDvK/YszCbE67fi2V8YwDQYJKoZIhvcNAQELBQAw
RjELMAkGA1UEBhMCVVMxIjAgBgNVBAoTGUdvb2dsZSBUcnVzdCBTZXJ2aWNlcyBM
TEMxEzARBgNVBAMTCkdUUyBDQSAxQzMwHhcNMjMwOTE4MDgyNTA3WhcNMjMxMjEx
MDgyNTA2WjAiMSAwHgYDVQQDExd1cGxvYWQudmlkZW8uZ29vZ2xlLmNvbTBZMBMG
ByqGSM49AgEGCCqGSM49AwEHA0IABCSQCjeg8l5xiOxQcmsUanWmcojfSR1GoSdC
H87+seZqAoM/0rMo77YOOtSmzd42YS1eEeiIBZl5Kptxi3VJhIWjggPpMIID5TAO
BgNVHQ8BAf8EBAMCB4AwEwYDVR0lBAwwCgYIKwYBBQUHAwEwDAYDVR0TAQH/BAIw
ADAdBgNVHQ4EFgQUHFb+AucsL2bY45fznkqYEDMihIIwHwYDVR0jBBgwFoAUinR/
r4XN7pXNPZzQ4kYU83E1HScwagYIKwYBBQUHAQEEXjBcMCcGCCsGAQUFBzABhhto
dHRwOi8vb2NzcC5wa2kuZ29vZy9ndHMxYzMwMQYIKwYBBQUHMAKGJWh0dHA6Ly9w
a2kuZ29vZy9yZXBvL2NlcnRzL2d0czFjMy5kZXIwggGYBgNVHREEggGPMIIBi4IX
dXBsb2FkLnZpZGVvLmdvb2dsZS5jb22CFCouY2xpZW50cy5nb29nbGUuY29tghEq
LmRvY3MuZ29vZ2xlLmNvbYISKi5kcml2ZS5nb29nbGUuY29tghMqLmdkYXRhLnlv
dXR1YmUuY29tghAqLmdvb2dsZWFwaXMuY29tghMqLnBob3Rvcy5nb29nbGUuY29t
ghcqLnlvdXR1YmUtM3JkLXBhcnR5LmNvbYIRdXBsb2FkLmdvb2dsZS5jb22CEyou
dXBsb2FkLmdvb2dsZS5jb22CEnVwbG9hZC55b3V0dWJlLmNvbYIUKi51cGxvYWQu
eW91dHViZS5jb22CH3VwbG9hZHMuc3RhZ2UuZ2RhdGEueW91dHViZS5jb22CFWJn
LWNhbGwtZG9uYXRpb24uZ29vZ4IbYmctY2FsbC1kb25hdGlvbi1hbHBoYS5nb29n
ghxiZy1jYWxsLWRvbmF0aW9uLWNhbmFyeS5nb29nghliZy1jYWxsLWRvbmF0aW9u
LWRldi5nb29nMCEGA1UdIAQaMBgwCAYGZ4EMAQIBMAwGCisGAQQB1nkCBQMwPAYD
VR0fBDUwMzAxoC+gLYYraHR0cDovL2NybHMucGtpLmdvb2cvZ3RzMWMzL3pkQVR0
MEV4X0ZrLmNybDCCAQUGCisGAQQB1nkCBAIEgfYEgfMA8QB2AK33vvp8/xDIi509
nB4+GGq0Zyldz7EMJMqFhjTr3IKKAAABiqeboL4AAAQDAEcwRQIgAi2JeM72oqu1
B/v897j4TgFj7VqWO2PLxuA4obx1gd8CIQCKK3VuERTMsiD+QVyOXzcLQTA05L8n
Zyz3xUw6vCG1pAB3AHoyjFTYty22IOo44FIe6YQWcDIThU070ivBOlejUutSAAAB
iqeboM4AAAQDAEgwRgIhAMd7MHFtuQ5Um0NcO3ezTmdSyWLIJgHvszZXyQF2B1Po
AiEAner/ODW+vLz7bdPpD4l+Uk2C+sfth92xbpD9MQvjXbMwDQYJKoZIhvcNAQEL
BQADggEBAHjcA3zrrcRtQI05IqYTAUSTGoNA+j4jmVg8sK4TBU8IqQay8bR8BM5z
O0R1V1o9W9j9vZIIjsqh26H1uWMkhEpFlIqPUwTp+1CK34Oi3UyGnx+iTnZGTfHv
bxtzOltkI/ZCYZpHCYKlTtA5kg1rKsrECLsxRT8niZpqSlebC8bc+3G9MXYG6SUk
uzpr0pHJSCYywiBhBirdu/Kpl9TJtsVsqI1JAgPfXMLgeKyKPwVtgSs/qiH40k+s
+ICny15Uftcg/nx6ZItlyw4ait+OOa6tYv6N2zRP+4CBXpaqiNc1c0tWATFeQD3L
OxARE+2IiAcCgqvdyMEZlTC47VSzMH8=
"-----END CERTIFICATE-----\n";

// Getting Access Token : 
// At first, you should get service account key (JSON file).
// Type below command in Google Cloud Shell to get AccessToken: 
// $ gcloud auth activate-service-account --key-file=KEY_FILE   (KEY_FILE is your service account key file)
// $ gcloud auth print-access-token
// The Access Token is expired in an hour.
// Google recommends to use Access Token.
//const String AccessToken = "";

// It is also possible to use "API Key" instead of "Access Token". It doesn't have time limit.
const String ApiKey = "Your_API_Key";

// see https://cloud.google.com/docs/authentication?hl=ja#getting_credentials_for_server-centric_flow
// see https://qiita.com/basi/items/3623a576b754f738138e (Japanese)

#endif  // _NETWORK_PARAM_H
