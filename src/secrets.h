#include <pgmspace.h>

#define SECRET
#define THINGNAME "xxxxxxxxxxxxxxxxxx"

const char WIFI_SSID[] = "xxxxxxxxxxxx";
const char WIFI_PASSWORD[] = "xxxxxxxxxxxxxxxxxxx";
const char AWS_IOT_ENDPOINT[] = "xxxxxxxxxxxxxxxxxxx.iot.eu-west-1.amazonaws.com";

// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
-----END CERTIFICATE-----
)EOF";

// Device Certificate
static const char AWS_CERT_CRT[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
-----END CERTIFICATE-----
)EOF";

// Device Private Key
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
-----END RSA PRIVATE KEY-----
)KEY";
