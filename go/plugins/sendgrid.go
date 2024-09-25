package main

import (
	"fmt"
	"log"
	"github.com/sendgrid/sendgrid-go"
	"github.com/sendgrid/sendgrid-go/helpers/mail"
)

var FROM = ""
var TO = ""
var SENDGRID_API_KEY = ""

func main() {
	from := mail.NewEmail("", FROM)
	subject := "TEST"
	to := mail.NewEmail("", TO)
	plainTextContent := "test"
	htmlContent := "<strong>test</strong>"
	message := mail.NewSingleEmail(from, subject, to, plainTextContent, htmlContent)
	client := sendgrid.NewSendClient(SENDGRID_API_KEY)
	response, err := client.Send(message)

	if err != nil {
		log.Println(err)
	} else {
		fmt.Println(response.StatusCode)
		fmt.Println(response.Body)
		fmt.Println(response.Headers)
	}
}