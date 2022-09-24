package com.example.app_cara_ou_coroa

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_result.*

class result : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_result)

        val data: Bundle = intent.extras!!
        val number = data.getInt("number")

        if(number == 0){
            imageResult.setImageResource(R.drawable.moeda_coroa)
        } else {
            imageResult.setImageResource(R.drawable.moeda_cara)
        }

        backButton.setOnClickListener {
            finish()
        }
    }
}