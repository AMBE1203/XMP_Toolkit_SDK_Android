package com.example.demousenativefile

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log


class MainActivity : AppCompatActivity() {

    companion object {
        init {
            try {

                System.loadLibrary("c++_shared")
                System.loadLibrary("native-lib")

                System.loadLibrary("XMPCore")
                System.loadLibrary("XMPFiles")
                Log.e("AMBE12003", "vo day")

            } catch (e: Exception) {
                Log.e("AMBE12003", e.localizedMessage)
            }

        }
    }

    private external fun initialize(): Boolean



    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val check = initialize()
//
        Log.e("AMBE1203", check.toString())




    }
}