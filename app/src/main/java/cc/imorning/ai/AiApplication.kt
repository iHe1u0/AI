package cc.imorning.ai

import android.app.Application
import java.lang.System.loadLibrary

class AiApplication : Application() {

    override fun onCreate() {
        super.onCreate()
        loadLibraries()
    }

    private fun loadLibraries() {
        loadLibrary("ai")
        loadLibrary("opencv")
        loadLibrary("opencv_java4")
    }

}