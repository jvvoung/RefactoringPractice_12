// ❌ 냄새 5 — 전역 데이터
int g_currentTemperature = 0; // 전역 → 어디서든 변경 가능!
void setTemp(int t) { g_currentTemperature = t; }

// ✅ After — 변수 캡슐화하기 (Encapsulate Variable)
// class TemperatureManager {
//     int temperature_ = 0;
// public:
//     int  getTemperature() const { return temperature_; }
//     void setTemperature(int t)  { temperature_ = t;    }
// };


